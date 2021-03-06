/**
* \file seg_pv1.c
*
* Patient visit segment (PV1) accessors for the HL7 parser.
*
* \internal
* Copyright (c) 2011 Juan Jose Comellas <juanjo@comellas.org>
*
* \warning DO NOT MODIFY THIS FILE.
*
* Autogenerated by the ./hl7segdef.py script on Mon Jun  6 12:54:47 2011
*/

/* ------------------------------------------------------------------------
   Headers
   ------------------------------------------------------------------------ */

#include <hl7parser/config.h>
#include <hl7parser/element.h>
#include <hl7parser/export.h>
#include <hl7parser/segment.h>
#include <hl7parser/seg_pv1.h>

BEGIN_C_DECL()

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_set_id( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_set_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_set_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_patient_class( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_class( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_class_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_patient_point_of_care( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 2, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_point_of_care( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 2, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_point_of_care_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 2, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_patient_location_facility( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 2, 3 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_location_facility( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 2, 3, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_patient_location_facility_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 2, 3, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_admission_type( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 3 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_admission_type( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 3, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_admission_type_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 3, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_attending_doctor_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 6, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 6, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 6, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_attending_doctor_last_name( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 6, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_last_name( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 6, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_last_name_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 6, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_attending_doctor_first_name( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 6, 2 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_first_name( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 6, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_first_name_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 6, 2, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_attending_doctor_assigning_authority( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 6, 8 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_assigning_authority( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 6, 8, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_attending_doctor_assigning_authority_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 6, 8, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_referring_doctor_id( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 7, 0 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_id( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 7, 0, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_id_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 7, 0, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_referring_doctor_last_name( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 7, 1 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_last_name( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 7, 1, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_last_name_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 7, 1, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_referring_doctor_first_name( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 7, 2 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_first_name( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 7, 2, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_first_name_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 7, 2, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_referring_doctor_assigning_authority( HL7_Segment *segment )
{
    return hl7_segment_component( segment, 7, 8 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_assigning_authority( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_component( segment, 7, 8, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_referring_doctor_assigning_authority_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_component( segment, 7, 8, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_hospital_service( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 9 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_hospital_service( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 9, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_hospital_service_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 9, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_readmission_indicator( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 12 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_readmission_indicator( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 12, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_readmission_indicator_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 12, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_discharge_diposition( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 35 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_discharge_diposition( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 35, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_discharge_diposition_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 35, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_pv1_admit_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_field( segment, 43 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_admit_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 43, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_admit_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, true, false, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 43, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT time_t hl7_pv1_discharge_date( HL7_Segment *segment )
{
    return hl7_element_date( hl7_segment_field( segment, 44 ) );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_discharge_date( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 44, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_discharge_date_time( HL7_Segment *segment, const time_t value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_set_date( &element, value, true, false, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 44, &element ) : rc );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT HL7_Element *hl7_pv1_visit_indicator( HL7_Segment *segment )
{
    return hl7_segment_field( segment, 50 );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_visit_indicator( HL7_Segment *segment, HL7_Element *element )
{
    return hl7_segment_set_field( segment, 50, element );
}

/* ------------------------------------------------------------------------ */
HL7_EXPORT int hl7_pv1_set_visit_indicator_str( HL7_Segment *segment, const char *value )
{
    int         rc;
    HL7_Element element;

    rc = hl7_element_copy_str( &element, value, segment->allocator );

    return ( rc == 0 ? hl7_segment_set_field( segment, 50, &element ) : rc );
}

END_C_DECL()
