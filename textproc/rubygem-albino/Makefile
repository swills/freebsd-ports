# Created by: Steve Wills <swills@rubick>
# $FreeBSD: head/textproc/rubygem-albino/Makefile 440349 2017-05-07 16:16:19Z miwi $

PORTNAME=	albino
PORTVERSION=	1.3.3
PORTREVISION=	1
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby wrapper for pygmentize

LICENSE=	MIT

RUN_DEPENDS=	rubygem-posix-spawn>=0.3.6:devel/rubygem-posix-spawn \
		${PYTHON_PKGNAMEPREFIX}pygments>=0.8:textproc/py-pygments

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem python
REINPLACE_ARGS=	-i ''

post-patch:
	@${REINPLACE_CMD} -e '1d' ${WRKSRC}/vendor/multipygmentize

.include <bsd.port.mk>
