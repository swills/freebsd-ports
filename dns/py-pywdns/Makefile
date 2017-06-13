# $FreeBSD: head/dns/py-pywdns/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	pywdns
PORTVERSION=	0.8.0
CATEGORIES=	dns python
MASTER_SITES=	FARSIGHT LOCAL/truckman/farsight
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	truckman@FreeBSD.org
COMMENT=	Python wrapper for dns/wdns

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libwdns.so:dns/wdns

USE_PYTHON=	autoplist distutils
USES=		pkgconfig python

post-patch:
	${REINPLACE_CMD} -e "1s+ python+ ${PYTHON_CMD}+" ${WRKSRC}/gen_pywdns_constants

post-install:
	${STRIP_CMD} ${STAGEDIR}/${PYTHON_SITELIBDIR}/wdns.so

.include <bsd.port.mk>
