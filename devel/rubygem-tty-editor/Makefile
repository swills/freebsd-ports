# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-tty-editor/Makefile 467425 2018-04-15 20:03:27Z sunpoet $

PORTNAME=	tty-editor
PORTVERSION=	0.4.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Opens a file or text in the user preferred editor

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-tty-prompt>=0.16.0:devel/rubygem-tty-prompt \
		rubygem-tty-which>=0.3.0:devel/rubygem-tty-which

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
