//---------------------------------------------------------------------------------------
//  This file is part of the Lomse library.
//  Copyright (c) 2010 Lomse project
//
//  Lomse is free software; you can redistribute it and/or modify it under the
//  terms of the GNU General Public License as published by the Free Software Foundation,
//  either version 3 of the License, or (at your option) any later version.
//
//  Lomse is distributed in the hope that it will be useful, but WITHOUT ANY
//  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
//  PARTICULAR PURPOSE.  See the GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License along
//  with Lomse; if not, see <http://www.gnu.org/licenses/>.
//  
//  For any comment, suggestion or feature request, please contact the manager of
//  the project at cecilios@users.sourceforge.net
//
//---------------------------------------------------------------------------------------

#ifndef __LOMSE_GLYPHS_H__        //to avoid nested includes
#define __LOMSE_GLYPHS_H__

#include "lomse_basic.h"

namespace lomse
{

//forward declarations


//---------------------------------------------------------------------------------------
//   Glyphs info: an entry of the Glyphs table
//---------------------------------------------------------------------------------------
struct GlyphData
{
    // all measurements in tenths
    unsigned int GlyphChar;
    Tenths GlyphOffset;
    Tenths SelRectShift;
    Tenths SelRectHeight;
    Tenths Top;
    Tenths Bottom;
	Tenths thxPos;
	Tenths thyPos;
	Tenths thWidth;
	Tenths thHeight;
	Tenths txDrag;
	Tenths tyDrag;

    GlyphData(const unsigned int glyph, int yOffset, int yShift, int selHeight,
              int top, int bottom, int xPos, int yPos, int width, int height,
              int xDrag, int yDrag);

};

//---------------------------------------------------------------------------------------
//indexes for the table
enum EGlyphIndex
{
    k_glyph_none = -1,            //special value meaning 'No glyph'

    //noteheads
    k_glyph_notehead_half = 0,    //half, blanca
    k_glyph_notehead_quarter,     //quarter, negra
    k_glyph_notehead_cross,       //cross, aspa

    //notes with stem and flag, in single char
    k_glyph_longa_note,           //longa
    k_glyph_breve_note,           //breve, cuadrada
    k_glyph_whole_note,
    k_glyph_half_note_down,       //half, blanca
    k_glyph_half_note_up,
    k_glyph_quarter_note_down,    //quarter, negra
    k_glyph_quarter_note_up,
    k_glyph_eighth_note_down,     //eighth, corchea
    k_glyph_eighth_note_up,
    k_glyph_16th_note_down,       //16th, semicorchea
    k_glyph_16th_note_up,
    k_glyph_32nd_note_down,       //32nd, fusa
    k_glyph_32nd_note_up,
    k_glyph_64th_note_down,       //64th, semifusa
    k_glyph_64th_note_up,
    k_glyph_128th_note_down,      //128th garrapatea
    k_glyph_128th_note_up,
    k_glyph_256th_note_down,      //256th semigarrapatea
    k_glyph_256th_note_up,

    // rests
    k_glyph_longa_rest,       //longa
    k_glyph_breve_rest,       //breve, cuadrada
    k_glyph_whole_rest,       //whole, redonda
    k_glyph_half_rest,        //half, blanca
    k_glyph_quarter_rest,     //quarter, negra
    k_glyph_eighth_rest,      //eighth, corchea
    k_glyph_16th_rest,        //16th, semicorchea
    k_glyph_32nd_rest,        //32nd, fusa
    k_glyph_64th_rest,        //64th, semifusa
    k_glyph_128th_rest,       //128th, garrapatea
    k_glyph_256th_rest,       //256th, semigarrapatea

    //note flags
    k_glyph_eighth_flag_down,     //eighth, corchea
    k_glyph_16th_flag_down,       //16th, semicorchea
    k_glyph_32nd_flag_down,       //32nd, fusa
    k_glyph_64th_flag_down,       //64th, semifusa
    k_glyph_128th_flag_down,      //128th, garrapatea
    k_glyph_256th_flag_down,      //256th, semigarrapatea
    k_glyph_eighth_flag_up,
    k_glyph_16th_flag_up,
    k_glyph_32nd_flag_up,
    k_glyph_64th_flag_up,
    k_glyph_128th_flag_up,
    k_glyph_256th_flag_up,

    //accidentals
    k_glyph_natural_accidental,
    k_glyph_sharp_accidental,
    k_glyph_flat_accidental,
    k_glyph_double_sharp_accidental,
    k_glyph_double_flat_accidental,

    //clefs
    k_glyph_g_clef,  
    k_glyph_f_clef,
    k_glyph_f_clef_ottava_alta,
    k_glyph_f_clef_ottava_bassa,
    k_glyph_c_clef,
    k_glyph_percussion_clef_block,

    //numbers for time signatures
    k_glyph_number_0,
    k_glyph_number_1,
    k_glyph_number_2,
    k_glyph_number_3,
    k_glyph_number_4,
    k_glyph_number_5,
    k_glyph_number_6,
    k_glyph_number_7,
    k_glyph_number_8,
    k_glyph_number_9,

    //other for time signatures
    k_glyph_common_time,
    k_glyph_cut_time,

    //signs
    k_glyph_dot,                          //dot, for dotted notes
    k_glyph_small_quarter_note,           //small quarter note up, for metronome marks
    k_glyph_small_quarter_note_dotted,    //small dotted quarter note up
    k_glyph_small_eighth_note,            //small eighth note up
    k_glyph_small_eighth_note_dotted,     //small dotted eighth note up
    k_glyph_small_equal_sign,             //small equal sign, for metronome marks

	k_glyph_breath_mark_v,				//breath-mark  V
    k_glyph_dacapo,
    k_glyph_dalsegno,
    k_glyph_coda,
    k_glyph_segno,
    k_glyph_octava,
    k_glyph_fermata_over,
    k_glyph_fermata_under,

    //figured bass. Numbers and other symbols
    k_glyph_figured_bass_0,                   //number 0
    k_glyph_figured_bass_1,                   //number 1
    k_glyph_figured_bass_2,                   //number 2
    k_glyph_figured_bass_3,                   //number 3
    k_glyph_figured_bass_4,                   //number 4
    k_glyph_figured_bass_5,                   //number 5
    k_glyph_figured_bass_6,                   //number 6
    k_glyph_figured_bass_7,                   //number 7
    k_glyph_figured_bass_8,                   //number 8
    k_glyph_figured_bass_9,                   //number 9
    k_glyph_figured_bass_sharp,               //Sharp symbol
    k_glyph_figured_bass_flat,                //Flat symbol
    k_glyph_figured_bass_natural,             //Natural symbol
    k_glyph_figured_bass_plus,                // +
    k_glyph_figured_bass_minus,               // -
    k_glyph_figured_bass_open_parenthesis,    // (
    k_glyph_figured_bass_close_parenthesis,   // )
    k_glyph_figured_bass_7_striked,           // 7 with overlayered /

};

//class MusicGlyphs
//{
//protected:
//    const GlyphData* m_glyphs;
//
//public:
//    MusicGlyphs();
//    ~MusicGlyphs() {}
//
//    inline const GlyphData& get_glyph_data(int iGlyph) { return *(m_glyphs+iGlyph); }
//};

extern const GlyphData glyphs_lmbasic2[];     //the glyphs table


}   //namespace lomse

#endif    // __LOMSE_GLYPHS_H__

