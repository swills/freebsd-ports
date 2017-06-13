# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/p5-Protocol-SocketIO/Makefile 431106 2017-01-10 18:05:28Z sunpoet $

PORTNAME=	Protocol-SocketIO
PORTVERSION=	0.07
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:VTI
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Socket.IO protocol implementation

LICENSE=	ART20

BUILD_DEPENDS=	p5-JSON>=0:converters/p5-JSON
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USE_PERL5=	modbuildtiny
USES=		perl5

.include <bsd.port.mk>
