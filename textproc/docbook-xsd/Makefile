# Created by: ijliao
# $FreeBSD: head/textproc/docbook-xsd/Makefile 472207 2018-06-11 20:56:24Z feld $

PORTNAME=	docbook-xsd
DISTVERSION=	1.0b1
CATEGORIES=	textproc
MASTER_SITES=	http://www.oasis-open.org/docbook/xmlschema/${DISTVERSION}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	DocBook W3C XML Schema

USES=		zip
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/*.xsd ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
