#include "pch.h"
#include "PrincipleCurvature.h"
#include <list>


#if defined __cplusplus

extern "C"
{
#endif
	std::list<ON_Line> GetPyramid(ON_3dPoint P1, ON_3dPoint P2, ON_3dPoint P3, ON_3dPoint P4)
	{
		auto Py = Pyramid(P1, P2, P3, P4);
		return Py.GetPyramid();
	}
    //void TraverseBrepFace(
    //    const ON_Brep& brep,
    //    int fi,                  // brep face index
    //    ON_TextLog& error_log
    //)
    //{
    //    if (fi < 0 || fi >= brep.m_F.Count())
    //    {
    //        error_log.Print("Invalid face index\n");
    //        return;
    //    }

    //    const ON_BrepFace& face = brep.m_F[fi];

    //    // pSrf = underlying untrimmed surface
    //    const ON_Surface* pSrf = NULL;
    //    if (face.m_si < 0 || face.m_si >= brep.m_S.Count())
    //        error_log.Print("ERROR: invalid brep.m_F[%d].m_si\n", fi);
    //    else {
    //        pSrf = brep.m_S[face.m_si];
    //        if (!pSrf)
    //            error_log.Print("ERROR: invalid brep.m_S[%d] is NULL\n", face.m_si);
    //    }

    //    // The face is trimmed with one or more trimming loops.
    //    //
    //    // All the 2d trimming curves are oriented so that the
    //    // active region of the trimmed surface lies to the left
    //    // of the 2d trimming curve.  
    //    //
    //    // If face.m_bRev is true, the orientations of the face in
    //    // the b-rep is opposited the natural parameteric orientation
    //    // of the surface.

    //    // loop_count = number of trimming loops on this face (>=1)
    //    const int loop_count = face.m_li.Count();

    //    int fli; // face's loop index
    //    for (fli = 0; fli < loop_count; fli++) {
    //        const int li = face.m_li[fli]; // li = brep loop index
    //        const ON_BrepLoop& loop = brep.m_L[li];

    //        // loop_edge_count = number of trimming edges in this loop
    //        const int loop_trim_count = loop.m_ti.Count();

    //        int lti; // loop's trim index
    //        for (lti = 0; lti < loop_trim_count; lti++) {
    //            const int ti = loop.m_ti[lti]; // ti = brep trim index
    //            const ON_BrepTrim& trim = brep.m_T[ti];

    //            //////////////////////////////////////////////////////
    //            // 2d trimming information
    //            //
    //            // Each trim has a 2d parameter space curve.
    //            const ON_Curve* p2dCurve = NULL;
    //            const int c2i = trim.m_c2i; // c2i = brep 2d curve index
    //            if (c2i < 0 || c2i >= brep.m_C2.Count()) {
    //                error_log.Print("ERROR: invalid brep.m_T[%d].m_c2i\n", ti);
    //            }
    //            else {
    //                p2dCurve = brep.m_C2[c2i];
    //                if (!p2dCurve)
    //                    error_log.Print("ERROR: invalid brep.m_C2[%d] is NULL\n", c2i);
    //            }


    //            //////////////////////////////////////////////////////
    //            // topology and 3d geometry information
    //            //

    //            // Trim starts at v0 and ends at v1.  When the trim
    //            // is a loop or on a singular surface side, v0i and v1i
    //            // will be equal.
    //            //const int v0i = trim.m_vi[0]; // v0i = brep vertex index
    //            //const int v1i = trim.m_vi[1]; // v1i = brep vertex index
    //            //const ON_BrepVertex& v0 = brep.m_V[v0i];
    //            //const ON_BrepVertex& v1 = brep.m_V[v1i];
    //            // The vX.m_ei[] array contains the brep.m_E[] indices of
    //            // the edges that begin or end at vX.

    //            const int ei = trim.m_ei;
    //            if (ei == -1) {
    //                // This trim lies on a portion of a singular surface side.
    //                // The vertex indices are still valid and will be equal.
    //            }
    //            else {
    //                // If trim.m_bRev3d is false, the orientations of the 3d edge
    //                // and the 3d curve obtained by composing the surface and 2d
    //                // curve agree.
    //                //
    //                // If trim.m_bRev3d is true, the orientations of the 3d edge
    //                // and the 3d curve obtained by composing the surface and 2d
    //                // curve are opposite.
    //                const ON_BrepEdge& edge = brep.m_E[ei];
    //                const int c3i = edge.m_c3i;
    //                const ON_Curve* p3dCurve = NULL;

    //                if (c3i < 0 || c3i >= brep.m_C3.Count()) {
    //                    error_log.Print("ERROR: invalid brep.m_E[%d].m_c3i\n", ei);
    //                }
    //                else {
    //                    p3dCurve = brep.m_C3[c3i];
    //                    if (!p3dCurve)
    //                        error_log.Print("ERROR: invalid brep.m_C3[%d] is NULL\n", c3i);
    //                }

    //                // The edge.m_ti[] array contains the brep.m_T[] indices
    //                // for the other trims that are joined to this edge.
    //            }
    //        }
    //    }
    //}

#if defined __cplusplus
}
#endif