# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/net/py-upnp-inspector/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTNAME=	UPnP-Inspector
PORTVERSION=	0.2.2
CATEGORIES=	net python
MASTER_SITES=	http://coherence.beebits.net/download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	UPnP Device and Service analyzer

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Coherence>=0.6.4:net/py-coherence@${FLAVOR}

USES=		python:2.7
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
