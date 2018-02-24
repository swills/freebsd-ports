# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/devel/py-avro/Makefile 462745 2018-02-23 21:09:47Z rene $

PORTNAME=	avro
PORTVERSION=	1.8.1
CATEGORIES=	devel
MASTER_SITES=	http://www.sai.msu.su/apache/${PORTNAME}/${PORTNAME}-${PORTVERSION}/ \
		APACHE/${PORTNAME}/stable
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	python@FreeBSD.org
COMMENT=	Data serialization system for python

USES=		python
USE_PYTHON=	distutils autoplist

WRKSRC=		${WRKDIR}/${DISTNAME}/lang/py

pre-configure:
	${REINPLACE_CMD} 's|@AVRO_VERSION@|${PORTVERSION}|g' \
		${WRKSRC}/setup.py

.include <bsd.port.mk>
