# $FreeBSD: head/devel/p5-Callback-Frame/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Callback-Frame
PORTVERSION=	1.100
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Preserve error handlers and "local" variables across callbacks

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Guard>=0:devel/p5-Guard
BUILD_DEPENDS:=	${RUN_DEPENDS}

NO_ARCH=	yes

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
