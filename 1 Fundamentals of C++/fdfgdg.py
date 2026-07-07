!pip install fpdf

from fpdf import FPDF
import datetime

class PDF(FPDF):
    def header(self):
        if self.page_no() > 1:
            self.set_font('Arial', 'I', 8)
            self.cell(0, 10, 'Technical Report: Cyclone Fengal Case Study (2024)', 0, 0, 'R')
            self.ln(10)

    def footer(self):
        self.set_y(-15)
        self.set_font('Arial', 'I', 8)
        self.cell(0, 10, f'Page {self.page_no()}', 0, 0, 'C')

    def chapter_title(self, title):
        self.set_font('Arial', 'B', 14)
        self.set_fill_color(200, 220, 255)
        self.cell(0, 10, title, 0, 1, 'L', 1)
        self.ln(4)

    def chapter_body(self, body):
        self.set_font('Arial', '', 11)
        self.multi_cell(0, 7, body)
        self.ln()

    def add_bullet(self, text):
        self.set_font('Arial', '', 11)
        self.cell(5)  # Indent
        self.cell(5, 7, chr(149), 0, 0) # Bullet point
        self.multi_cell(0, 7, text)
    
    def add_subheading(self, text):
        self.set_font('Arial', 'B', 12)
        self.ln(2)
        self.cell(0, 10, text, 0, 1)

# Create PDF object
pdf = PDF()
pdf.set_auto_page_break(auto=True, margin=15)
pdf.set_margins(25.4, 25.4, 25.4) # 1 inch margins

# --- PAGE 1: TITLE PAGE ---
pdf.add_page()
pdf.ln(40)
pdf.set_font('Arial', 'B', 24)
pdf.multi_cell(0, 15, 'CASE STUDY:\nMETEOROLOGICAL ANALYSIS AND IMPACT OF CYCLONE FENGAL\nIN SRI LANKA (2024)', 0, 'C')

pdf.ln(30)
pdf.set_font('Arial', 'B', 14)
pdf.cell(0, 10, 'Submitted for Course Code: CVL-401', 0, 1, 'C')
pdf.set_font('Arial', '', 12)
pdf.cell(0, 10, 'Disaster Management & Mitigation', 0, 1, 'C')

pdf.ln(20)
pdf.set_font('Arial', 'B', 14)
pdf.cell(0, 10, 'SUBMITTED BY:', 0, 1, 'C')
pdf.ln(5)

# Student Table
pdf.set_font('Arial', 'B', 11)
pdf.set_fill_color(230, 230, 230)
pdf.cell(60, 10, 'Name', 1, 0, 'C', 1)
pdf.cell(40, 10, 'Roll Number', 1, 0, 'C', 1)
pdf.cell(60, 10, 'Contribution', 1, 1, 'C', 1)

pdf.set_font('Arial', '', 11)
data = [
    ("Aadyasha Mishra", "241220001", "Meteorology & Hydrology"),
    ("Divit Reddy", "241220002", "Infrastructure Impact"),
    ("Abhinav", "241220003", "Socio-Economic Analysis"),
    ("Abhishek Sharma", "241220004", "Relief & Recovery")
]

for name, roll, contrib in data:
    pdf.cell(60, 10, name, 1)
    pdf.cell(40, 10, roll, 1, 0, 'C')
    pdf.cell(60, 10, contrib, 1, 1)

pdf.ln(30)
pdf.cell(0, 10, f'Date: {datetime.date.today().strftime("%B %d, %Y")}', 0, 1, 'C')


# --- PAGE 2: TABLE OF CONTENTS ---
pdf.add_page()
pdf.chapter_title('TABLE OF CONTENTS')
pdf.ln(5)
toc = [
    "1. Executive Summary",
    "2. Introduction",
    "   2.1 Background",
    "   2.2 Objectives",
    "   2.3 Geographical Context",
    "3. Meteorological History",
    "   3.1 Formation and Trajectory",
    "   3.2 Synoptic Features",
    "   3.3 Rainfall Intensity",
    "4. Hydrological Impact",
    "   4.1 Flood Dynamics",
    "   4.2 Reservoir Management",
    "5. Impact Assessment",
    "   5.1 Casualties and Displacement",
    "   5.2 Critical Infrastructure Damage",
    "   5.3 Agricultural Losses",
    "6. Response and Recovery Operations",
    "7. Discussion and Technical Recommendations",
    "8. Conclusion",
    "9. References"
]
pdf.set_font('Arial', '', 12)
for item in toc:
    pdf.cell(0, 10, item, 0, 1)


# --- PAGE 3: EXEC SUMMARY & INTRO ---
pdf.add_page()
pdf.chapter_title('1. EXECUTIVE SUMMARY')
pdf.chapter_body(
    "In late November 2024, the island nation of Sri Lanka was severely impacted by Cyclone Fengal "
    "(initially categorized as a Deep Depression during its interaction with the island), which originated "
    "in the Southwest Bay of Bengal. While the system eventually made landfall near Puducherry, India, its "
    "trajectory moving parallel to the Sri Lankan coast brought catastrophic rainfall, gale-force winds, "
    "and widespread flooding to the Northern, Eastern, and North-Central provinces.\n\n"
    "This report analyzes the technical aspects of the disaster, focusing on the meteorological anomaly "
    "of stationary rain bands and the subsequent hydrological failure of drainage basins. Official data "
    "indicates over 475,000 individuals were affected, with significant damage to housing stocks and the "
    "agricultural sector. The opening of spill gates in major reservoirs, including those in the Mahaweli "
    "system, exacerbated downstream flooding, highlighting the critical need for integrated reservoir "
    "management protocols during cyclonic events. This case study synthesizes data from the Department of "
    "Meteorology (Sri Lanka), the Disaster Management Centre (DMC), and satellite telemetry."
)

pdf.chapter_title('2. INTRODUCTION')
pdf.add_subheading('2.1 Background')
pdf.chapter_body(
    "Sri Lanka’s geographical location in the Indian Ocean renders it highly susceptible to tropical cyclones, "
    "particularly during the Northeast Monsoon (Maha) season. Cyclone Fengal represents a classic case of a "
    "'slow-moving system,' where the cyclone's translation speed dropped significantly, allowing for prolonged "
    "precipitation accumulation over specific landmasses. Unlike high-velocity wind storms that cause destruction "
    "primarily through structural wind loads, Fengal’s primary destructive mechanism was hydrological—specifically, "
    "pluvial and fluvial flooding."
)
pdf.add_subheading('2.2 Objectives of the Case Study')
pdf.chapter_body("The primary objectives of this technical report are:")
pdf.add_bullet("To investigate the synoptic conditions that led to the intensification of Cyclone Fengal.")
pdf.add_bullet("To quantify the damage to civil infrastructure, including transport networks and hydraulic structures.")
pdf.add_bullet("To evaluate the effectiveness of the early warning systems (EWS) and evacuation protocols.")
pdf.add_bullet("To propose engineering and policy recommendations for flood resilience in Sri Lanka’s dry zone.")

pdf.add_subheading('2.3 Geographical Context')
pdf.chapter_body(
    "The study focuses on the Eastern Province (Ampara, Batticaloa, Trincomalee) and the Northern Province "
    "(Jaffna, Mullaitivu). These regions consist largely of flat coastal plains and minor floodplains, making "
    "them inherently vulnerable to storm surges and freshwater inundation. The soil characteristics in these "
    "zones (often clayey or sandy loam) play a significant role in runoff coefficients."
)


# --- PAGE 4: METEOROLOGY & HYDROLOGY ---
pdf.add_page()
pdf.chapter_title('3. METEOROLOGICAL HISTORY')
pdf.add_subheading('3.1 Formation and Trajectory')
pdf.chapter_body(
    "The system was first identified as a low-pressure area over the South Andaman Sea around November 23, 2024. "
    "By November 25, it concentrated into a Depression. The India Meteorological Department (IMD) and Sri Lanka’s "
    "Department of Meteorology tracked the system as it moved in a North-Northwest (NNW) direction. Crucially, rather "
    "than moving quickly away from the island, the system lingered off the northeast coast of Sri Lanka for nearly 48 hours."
)

pdf.add_subheading('3.2 Synoptic Features')
pdf.add_bullet("Maximum Sustained Surface Winds: 60-75 km/h (during the Sri Lanka impact phase).")
pdf.add_bullet("Central Pressure: Dropped to approximately 996 hPa.")
pdf.add_bullet("Vertical Wind Shear: Moderate shear prevented rapid intensification into a Severe Cyclonic Storm initially.")

pdf.add_subheading('3.3 Rainfall Intensity')
pdf.chapter_body(
    "The rainfall recorded was unprecedented for the inter-monsoonal period. Several meteorological stations "
    "reported 24-hour rainfall figures exceeding 200mm, leading to saturation of the soil matrix."
)
pdf.add_bullet("Trincomalee: 280 mm (24 hrs)")
pdf.add_bullet("Jaffna: 190 mm (24 hrs)")
pdf.add_bullet("Batticaloa: 210 mm (24 hrs)")

pdf.chapter_title('4. HYDROLOGICAL IMPACT')
pdf.add_subheading('4.1 Flood Dynamics')
pdf.chapter_body(
    "The flooding mechanism during Cyclone Fengal was two-fold. First, Pluvial Flooding occurred in urban areas "
    "like Jaffna and Batticaloa due to the inability of municipal drainage systems to handle rainfall intensities "
    "exceeding 50 mm/hr. Second, Fluvial Flooding occurred as river basins, already saturated from the onset of "
    "the Northeast Monsoon, reached bank-full stages rapidly."
)

pdf.add_subheading('4.2 Reservoir Management')
pdf.chapter_body(
    "A critical technical aspect of this disaster was the management of Sri Lanka's extensive network of reservoirs. "
    "Due to the rapid inflow (Qin), the hydraulic head increased dangerously close to the bund spill levels. To prevent "
    "dam failure, irrigation engineers were forced to open spill gates in Parakrama Samudra (Polonnaruwa), "
    "Senanayake Samudra (Ampara), and Kantale Tank (Trincomalee). The discharge (Qout) from these spillways caused "
    "downstream inundation, highlighting the trade-off between Dam Safety and Downstream Flood Control."
)


# --- PAGE 5: IMPACT ASSESSMENT ---
pdf.add_page()
pdf.chapter_title('5. IMPACT ASSESSMENT')

pdf.add_subheading('5.1 Casualties and Displacement')
pdf.chapter_body("According to the Disaster Management Centre (DMC) Situation Report (as of Dec 02, 2024):")
pdf.add_bullet("Deaths: 17 confirmed (Causes: Landslides, drowning, and wall collapses).")
pdf.add_bullet("Injured: 20+")
pdf.add_bullet("Affected Population: 475,225 individuals (approx. 141,000 families).")
pdf.add_bullet("Displaced: Over 60,000 individuals were housed in 279 safety centers at the peak of the crisis.")

pdf.add_subheading('5.2 Critical Infrastructure Damage')
pdf.chapter_body(
    "Road Network: The Road Development Authority (RDA) reported submerged sections of the A9 (Kandy-Jaffna) "
    "and A4 (Colombo-Batticaloa) highways. Scouring of bridge foundations was observed in the Manampitiya area, "
    "requiring immediate structural assessment post-flood."
)
pdf.chapter_body(
    "Housing: 106 houses were fully destroyed due to structural failure of load-bearing masonry walls. "
    "Additionally, 2,516 houses were partially damaged, primarily suffering from roof failures due to wind loads "
    "and partial wall collapse due to water saturation."
)
pdf.chapter_body(
    "Power Grid: The Ceylon Electricity Board (CEB) reported widespread tripping of 33kV distribution lines "
    "due to falling trees, leaving over 100,000 consumers without power for up to 72 hours."
)

pdf.add_subheading('5.3 Agricultural Losses')
pdf.chapter_body(
    "The cyclone struck during the planting phase of the Maha season. Approximately 17,000 to 20,000 hectares "
    "of paddy fields were submerged for more than 4 days, leading to crop rot. High mortality rates in livestock "
    "(cattle and poultry) were also reported in the Northern Province due to hypothermia and drowning."
)


# --- PAGE 6: RESPONSE & RECOVERY ---
pdf.add_page()
pdf.chapter_title('6. RESPONSE AND RECOVERY OPERATIONS')
pdf.add_subheading('6.1 Immediate Emergency Response')
pdf.chapter_body(
    "The Government of Sri Lanka activated the National Emergency Operation Plan (NEOP). The Tri-Forces were "
    "heavily deployed; the Sri Lanka Army used BTR armored personnel carriers to navigate flooded terrain in "
    "Polonnaruwa, while the Navy utilized dinghies for relief distribution in cut-off areas of Batticaloa. "
    "The DMC issued 'Red Alerts' via SMS and localized public address systems 24 hours prior to peak intensity."
)

pdf.add_subheading('6.2 Challenges in Relief Distribution')
pdf.chapter_body("Despite the warnings, several challenges hindered the operation:")
pdf.add_bullet("Last-Mile Connectivity: Rural roads turned into mud tracks, making them inaccessible to heavy trucks.")
pdf.add_bullet("Communication Blackouts: Power outages disrupted telecommunication towers.")
pdf.add_bullet("Sanitation: In welfare centers, the ratio of toilets to refugees was critically low.")

pdf.chapter_title('7. DISCUSSION AND RECOMMENDATIONS')
pdf.chapter_body("Based on the analysis, the following technical recommendations are proposed:")

pdf.add_subheading('1. Integrated Reservoir Operation via AI')
pdf.chapter_body(
    "Current reservoir management relies on manual rule curves. An AI-driven hydrological model that integrates "
    "real-time rainfall forecasts with reservoir inflow predictions is needed to allow for 'pre-release' of water."
)

pdf.add_subheading('2. Resilient Housing Retrofitting')
pdf.chapter_body(
    "We recommend a policy enforcing tie-beams at the lintel level and proper roof anchorage (J-bolts) for "
    "coastal housing to withstand wind speeds up to 100 km/h."
)

pdf.add_subheading('3. Elevating Critical Road Segments')
pdf.chapter_body(
    "Flood mapping data should be used to identify road segments that frequently submerge. These sections should "
    "be elevated on embankments with adequate cross-drainage culverts."
)


# --- PAGE 7: CONCLUSION & REFS ---
pdf.add_page()
pdf.chapter_title('8. CONCLUSION')
pdf.chapter_body(
    "Cyclone Fengal serves as a stark reminder of the escalating volatility of weather systems in the Bay of Bengal. "
    "While the loss of life was mitigated compared to historical cyclones due to improved early warning systems, "
    "the economic loss remains sustainable. The transition from 'Disaster Response' to 'Disaster Resilience' "
    "requires a paradigm shift, investing in hard engineering solutions alongside community awareness. This case "
    "study underscores that the scale of a disaster is often dictated by the quality of infrastructure and preparedness."
)

pdf.chapter_title('9. REFERENCES')
pdf.add_bullet("Disaster Management Centre (DMC), Sri Lanka. 'Daily Situation Report - Cyclone Fengal,' Dec 02, 2024.")
pdf.add_bullet("Department of Meteorology, Sri Lanka. 'Weather Analysis Report: Deep Depression in Bay of Bengal,' Nov 2024.")
pdf.add_bullet("ReliefWeb. 'Sri Lanka: Tropical Cyclone Fengal - Nov 2024.'")
pdf.add_bullet("Irrigation Department. 'Reservoir Water Levels and Gate Opening Data,' Nov 2024.")
pdf.add_bullet("Wikipedia. 'Cyclone Fengal - Meteorological History and Impact.'")

pdf.output('Cyclone_Fengal_Case_Study.pdf')
print("PDF Generated Successfully: Cyclone_Fengal_Case_Study.pdf")