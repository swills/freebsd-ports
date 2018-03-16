# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/textproc/freexl/Makefile 464651 2018-03-16 06:25:31Z yuri $

PORTNAME=	freexl
DISTVERSION=	1.0.5
CATEGORIES=	textproc
MASTER_SITES=	http://www.gaia-gis.it/gaia-sins/freexl-sources/

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Library to extract valid data from within an Excel (.xls) spreadsheet

LICENSE=	GPLv2+ LGPL21+ MPL11
LICENSE_COMB=	dual

USES=		gmake iconv libtool pathfix
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	ac_cv_search_locale_charset=no
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
