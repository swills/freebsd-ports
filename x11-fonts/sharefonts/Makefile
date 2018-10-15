# Created by: dburr@FreeBSD.org
# $FreeBSD: head/x11-fonts/sharefonts/Makefile 481061 2018-10-01 19:57:09Z tobik $

PORTNAME=	sharefonts
PORTVERSION=	0.10
PORTREVISION=	7
CATEGORIES=	x11-fonts
MASTER_SITES=	http://download.gimp.org/pub/%SUBDIR%/ \
		ftp://ftp.sunet.se/pub/gnu/%SUBDIR%/   \
		http://ftp.gwdg.de/pub/misc/grafik/gimp/%SUBDIR%/ \
		http://mirrors.xmission.com/gimp/%SUBDIR%/
MASTER_SITE_SUBDIR=	gimp/fonts

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Collection of shareware ATM fonts from the CICA archives

RESTRICTED=	Shareware: cannot be distributed without prior authorization

NO_BUILD=	yes

NO_ARCH=	yes
SUB_FILES=	pkg-message
USES=		fonts

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKDIR}/sharefont/* ${STAGEDIR}${FONTSDIR}

.include <bsd.port.mk>
