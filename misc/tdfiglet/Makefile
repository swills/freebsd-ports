# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/misc/tdfiglet/Makefile 474654 2018-07-15 01:01:35Z zi $

PORTNAME=	tdfiglet
PORTVERSION=	0.3
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
