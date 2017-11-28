# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-message_bus/Makefile 454842 2017-11-24 19:36:58Z sunpoet $

PORTNAME=	message_bus
PORTVERSION=	2.0.9
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Message bus for rack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-rack>=1.1.3:www/rubygem-rack

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix
SHEBANG_FILES=	examples/chat/docker_container/update_chat

.include <bsd.port.mk>
