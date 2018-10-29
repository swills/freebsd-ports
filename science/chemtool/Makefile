# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/science/chemtool/Makefile 482591 2018-10-20 16:21:13Z yuri $

PORTNAME=	chemtool
DISTVERSION=	1.6.14
CATEGORIES=	science
MASTER_SITES=	http://ruby.chemie.uni-freiburg.de/~martin/chemtool/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Draw organic molecules easily and store them

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libEMF.so:graphics/libemf \
		libfontconfig.so:x11-fonts/fontconfig \
		libfreetype.so:print/freetype2
RUN_DEPENDS=	transfig:print/transfig

USES=		compiler:c++11-lang gmake gnome pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--enable-emf=yes --with-localedir=${PREFIX}
USE_GNOME=	cairo gdkpixbuf2 gtk20
USE_XORG=	x11

OPTIONS_DEFINE=	NLS EXAMPLES
OPTIONS_SUB=	yes

NLS_USES=	gettext
NLS_CONFIGURE_ENABLE=	nls

PORTEXAMPLES=	*

do-install-EXAMPLES-on:
	cd ${WRKSRC}/examples && ${FIND} . | \
		${CPIO} -pdm -L -R ${SHAREOWN}:${SHAREGRP} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
