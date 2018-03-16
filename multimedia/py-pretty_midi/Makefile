# $FreeBSD: head/multimedia/py-pretty_midi/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	pretty_midi
DISTVERSION=	0.2.8
PORTREVISION=	1
CATEGORIES=	multimedia python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Utility functions for handling MIDI data in a nice/intuitive way

LICENSE=	MIT

RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}mido>=1.1.16:multimedia/py-mido@${FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${FLAVOR}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
