# $FreeBSD: head/devel/rubygem-stomp/Makefile 443428 2017-06-12 10:22:04Z sunpoet $

PORTNAME=	stomp
PORTVERSION=	1.4.4
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Streaming Text Orientated Messaging Protocol gem

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem shebangfix

PLIST_FILES=	bin/catstomp bin/stompcat

SHEBANG_FILES=	examples/*.sh test/*.sh

.include <bsd.port.mk>
