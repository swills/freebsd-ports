# Created by: Norikatsu Shigemura <nork@FreeBSD.org>
# $FreeBSD: head/security/tpmmanager/Makefile 412349 2016-04-01 14:25:16Z mat $

PORTNAME=	tpmmanager
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}-${PORTVERSION:C/\.1//}/

MAINTAINER=	danilo@FreeBSD.org
COMMENT=	TPM Manager

LICENSE=	GPLv2

LIB_DEPENDS=	libtspi.so:security/trousers

USES=		qmake
USE_QT4=	gui moc_build rcc_build uic_build

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bin/${PORTNAME} ${STAGEDIR}${PREFIX}/bin/
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/latex/${PORTNAME}.pdf ${STAGEDIR}${DOCSDIR}/
	${INSTALL_DATA} ${WRKSRC}/doc/TPM_Manager.odt ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
