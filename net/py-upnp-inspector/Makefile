# Created by: Yuri Victorovich <yuri@rawbw.com>
# $FreeBSD: head/net/py-upnp-inspector/Makefile 418675 2016-07-17 18:53:40Z pawel $

PORTNAME=	UPnP-Inspector
PORTVERSION=	0.2.2
CATEGORIES=	net python
MASTER_SITES=	http://coherence.beebits.net/download/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@rawbw.com
COMMENT=	UPnP Device and Service analyzer

LICENSE=	PD
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}Coherence>=0.6.4:net/py-coherence

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
