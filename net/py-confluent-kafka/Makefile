# $FreeBSD: head/net/py-confluent-kafka/Makefile 491512 2019-01-28 19:09:37Z tobik $

PORTNAME=	confluent-kafka
DISTVERSION=	0.11.6
CATEGORIES=	net python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sergey@akhmatov.ru
COMMENT=	Confluent Apache Kafka Python client

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	librdkafka.so:net/librdkafka
RUN_DEPENDS=	${PY_ENUM34} \
		${PY_FUTURES}

USES=		localbase python
USE_PYTHON=	autoplist distutils

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHON_SITELIBDIR}/confluent_kafka/cimpl.so

.include <bsd.port.mk>
