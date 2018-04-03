# $FreeBSD: head/devel/py-raven/Makefile 466178 2018-04-01 19:57:11Z pi $

PORTNAME=	raven
PORTVERSION=	6.6.0
CATEGORIES=	devel python
#MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	pi@FreeBSD.org
COMMENT=	Client for Sentry

LICENSE=	BSD2CLAUSE

USES=		python
# either CHEESESHOP or github, whatever is newer
USE_GITHUB=	yes
GH_ACCOUNT=	getsentry
GH_PROJECT=	raven-python
USE_PYTHON=	autoplist concurrent distutils

.include <bsd.port.pre.mk>

.if ${PYTHON_REL} < 3200
RUN_DEPENDS+=	${PYTHON_PKGNAMEPREFIX}contextlib2>0:devel/py-contextlib2@${FLAVOR}
.endif

.include <bsd.port.post.mk>
