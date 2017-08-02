# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/textproc/freexl/Makefile 446653 2017-07-26 12:18:17Z wen $

PORTNAME=	freexl
PORTVERSION=	1.0.3
CATEGORIES=	textproc
MASTER_SITES=	http://www.gaia-gis.it/gaia-sins/freexl-sources/

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Library to extract valid data from within an Excel (.xls) spreadsheet

LICENSE=	MPL GPLv2 LGPL21
LICENSE_COMB=	multi

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	ac_cv_search_locale_charset=no
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
USES=		gmake iconv libtool pathfix
USE_LDCONFIG=	yes

.include <bsd.port.mk>
