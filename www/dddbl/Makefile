# Created by: Torsten Zühlsdorff <ports@toco-domains.de>
# $FreeBSD: head/www/dddbl/Makefile 417719 2016-06-28 14:00:45Z mat $

PORTNAME=	dddbl
PORTVERSION=	2.0.1
CATEGORIES=	www
MASTER_SITES=	http://www.dddbl.de/dddbl-versions/

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Definition Driven Database Layer for PHP

USES=		php tar:bzip2

NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/dddbl2

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${DATADIR})

.include <bsd.port.mk>
