# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/x11-fonts/exo/Makefile 420969 2016-08-27 11:13:39Z pawel $

PORTNAME=	exo
PORTVERSION=	2.0
CATEGORIES=	x11-fonts
MASTER_SITES=	http://www.ndiscovered.com/downloads/exo2/
DISTNAME=	EXO_2_OTF

MAINTAINER=	pkubaj@anongoth.pl
COMMENT=	Geometric sans serif font with a technological feel

LICENSE=	OFL11

USES=		fonts zip

NO_BUILD=	yes
NO_ARCH=	yes
NO_WRKSUBDIR=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	(cd ${WRKSRC} ; ${INSTALL_DATA} *.otf ${STAGEDIR}${FONTSDIR})

.include <bsd.port.mk>
