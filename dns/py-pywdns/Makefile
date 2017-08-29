# $FreeBSD: head/dns/py-pywdns/Makefile 448748 2017-08-26 01:42:45Z truckman $

PORTNAME=	pywdns
PORTVERSION=	0.9.0
CATEGORIES=	dns python
MASTER_SITES=	FARSIGHT LOCAL/truckman/farsight
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	truckman@FreeBSD.org
COMMENT=	Python wrapper for dns/wdns

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libwdns.so:dns/wdns

USES=		pkgconfig python
USE_PYTHON=	autoplist distutils

post-patch:
	${REINPLACE_CMD} -e "1s+ python+ ${PYTHON_CMD}+" ${WRKSRC}/gen_pywdns_constants

post-install:
	${STRIP_CMD} ${STAGEDIR}/${PYTHON_SITELIBDIR}/wdns.so

.include <bsd.port.mk>
