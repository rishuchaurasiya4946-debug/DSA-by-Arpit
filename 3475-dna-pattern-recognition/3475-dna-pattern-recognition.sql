# Write your MySQL query statement below
# Write your MySQL query statement below
select sample_id,dna_sequence,species,
CASE
    when dna_sequence like 'ATG%' then 1
    else 0
    end as has_start,
 CASE
    when dna_sequence like '%TAA' or dna_sequence like '%TAG' or dna_sequence like '%TGA' then 1
    else 0
    end as has_stop,  
CASE
    when dna_sequence like '%ATAT%' then 1
    else 0
    end as has_atat,
CASE
    when dna_sequence like '%GGG%' then 1
    else 0
    end as has_ggg

    from samples
