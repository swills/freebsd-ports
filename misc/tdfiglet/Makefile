# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/misc/tdfiglet/Makefile 479344 2018-09-09 23:35:26Z zi $

PORTNAME=	tdfiglet
PORTVERSION=	0.5
CATEGORIES=	misc

MAINTAINER=	zi@FreeBSD.org
COMMENT=	A figlet for TDF ANSI fonts

USES=		gmake
ALL_TARGET=	default

USE_GITHUB=	yes
GH_ACCOUNT=	tat3r

post-patch:
	@${REINPLACE_CMD} -Ee "s,^(FONTDIR := ).*,\1${DATADIR}," ${WRKSRC}/Makefile

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	(cd ${WRKSRC}/fonts && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
