# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/www/p5-AnyEvent-WebSocket-Client/Makefile 455797 2017-12-08 19:36:14Z feld $

PORTNAME=	AnyEvent-WebSocket-Client
PORTVERSION=	0.43
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PLICEASE
PKGNAMEPREFIX=	p5-

MAINTAINER=	feld@FreeBSD.org
COMMENT=	WebSocket client for AnyEvent

LICENSE=	ART10

BUILD_DEPENDS=	p5-AnyEvent>0:devel/p5-AnyEvent
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
