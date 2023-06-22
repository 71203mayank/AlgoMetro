#include<bits/stdc++.h>
using namespace std;

int mat[28][28]={
    {0,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0,0,0},
{9,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,0,0,0},
{0,5,0,3,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,25,0,0,0,0,0,0,0,0},
{0,0,3,0,8,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,8,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,2,0,0,0,0},
{0,0,0,0,2,0,4,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,2,0,0,0,0},
{0,0,0,0,0,4,0,9,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,9,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11,0},
{0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,2,0,0,0,0,0,0,6,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,3,6,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,6,0,0,0,0,0,0,0,0,0,3,5,0,0,0,0,3,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,6,0,0,0,0,0,0,6,0,0,0,6,0,6,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,6,0,2,0,0,0,2,0,0,0,0,0,0},
{0,0,25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,4,4,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,5,0,0,4,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0},
{20,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,4,5,0,0,0,0,0,0,0},
{0,20,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,19,17,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,19,0,0,0},
{0,0,0,0,0,0,0,11,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,17,0,0,18},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,18,0},

};



vector<string> str={
    "Dwarka Sec 9",
    "Janakpuri West",
    "Rajouri Gardern",
    "Kirti Nagar",
    "Rajiv Chowk",
    "Mandi House",
    "Yamuna Bank",
    "Botanical Garden",
    "Noida City Center",
    "Anand Vihar",
    "Paschim Vihar West",
    "Ashok Main Park",
    "Inderlok",
    "Rithala",
    "Netaji Shubash Park",
    "Kashemere Gate",
    "Shahdara",
    "Majlis Park",
    "Azadpur",
    "INA",
    "Lajpath Nagar",
    "Adarsh Nagar",
    "New Delhi",
    "Central Secretariat",
    "Hauz Khas",
    "HUDA City Center",
    "Kalkaji Mandir",
    "Old Faridabad"
};

vector<string> sort_station{
    "(22)   Adarsh Nagar",
    "(10)   Anand Vihar",
    "(12)   Ashok Main Park",
    "(19)   Azadpur",
    "(08)   Botanical Garden",
    "(24)   Central Secretariat",
    "(01)   Dwarka Sec 9",
    "(25)   Hauz Khas",
    "(26)   HUDA City Center",
    "(20)   INA",
    "(13)   Inderlok",
    "(02)   Janakpuri West",
    "(27)   Kalkaji Mandir",
    "(16)   Kashemere Gate",
    "(04)   Kirti Nagar",
    "(21)   Lajpath Nagar",
    "(18)   Majlis Park",
    "(06)   Mandi House",
    "(15)   Netaji Shubash Park",
    "(23)   New Delhi",
    "(09)   Noida City Center",
    "(28)   Old Faridabad",
    "(11)   Paschim Vihar West",
    "(03)   Rajouri Gardern",
    "(05)   Rajiv Chowk",
    "(14)   Rithala",
    "(17)   Shahdara",
    "(07)   Yamuna Bank"
};

vector<string> line={
    "BO",
    "B",
    "BP",
    "BG",
    "BY",
    "BD",
    "B",
    "BV",
    "B",
    "B",
    "G",
    "G",
    "GR",
    "R",
    "RP",
    "RYD",
    "R",
    "P",
    "PY",
    "PY",
    "PD",
    "Y",
    "YO",
    "YD",
    "YV",
    "Y",
    "DV",
    "D"
};