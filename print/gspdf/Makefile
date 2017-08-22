# $FreeBSD: head/print/gspdf/Makefile 448472 2017-08-21 13:26:28Z theraven $

PORTNAME=	gspdf
PORTVERSION=	0.5
PORTREVISION=	6
CATEGORIES=	print gnustep
MASTER_SITES=	SAVANNAH/gap
DISTNAME=	GSPdf-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Postscript and Pdf Viewer for GNUstep

USES=		ghostscript gnustep
USE_GNUSTEP=	back build


post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/GNUstep/System/Applications/GSPdf.app/GSPdf

.include <bsd.port.mk>
