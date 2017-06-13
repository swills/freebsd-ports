# Created by: Dan Langille <dan@langille.org>
# $FreeBSD: head/sysutils/bacula-docs/Makefile 424555 2016-10-24 09:55:02Z mat $

PORTNAME=	bacula-docs
PORTVERSION=	7.4.4
CATEGORIES=	sysutils
MASTER_SITES=	SF

MAINTAINER=	dvl@FreeBSD.org
COMMENT=	Bacula document set

USES=		tar:bz2
NO_BUILD=	yes

PORTDOCS=	*.pdf

do-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${FIND} ${WRKSRC}/manuals/en \
		-name "*.pdf" -exec ${INSTALL_DATA} {} ${STAGEDIR}${DOCSDIR}/ \;

.include <bsd.port.mk>
