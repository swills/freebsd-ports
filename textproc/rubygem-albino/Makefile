# Created by: Steve Wills <swills@rubick>
# $FreeBSD: head/textproc/rubygem-albino/Makefile 470610 2018-05-22 13:15:13Z mat $

PORTNAME=	albino
PORTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby wrapper for pygmentize

LICENSE=	MIT

RUN_DEPENDS=	rubygem-posix-spawn>=0.3.6:devel/rubygem-posix-spawn \
		${PYTHON_PKGNAMEPREFIX}pygments>=0.8:textproc/py-pygments@${PY_FLAVOR}

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem python
REINPLACE_ARGS=	-i ''

post-patch:
	@${REINPLACE_CMD} -e '1d' ${WRKSRC}/vendor/multipygmentize

.include <bsd.port.mk>
