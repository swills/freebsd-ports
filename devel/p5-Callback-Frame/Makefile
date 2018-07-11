# $FreeBSD: head/devel/p5-Callback-Frame/Makefile 474242 2018-07-09 08:40:17Z mat $

PORTNAME=	Callback-Frame
PORTVERSION=	1.100
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Preserve error handlers and "local" variables across callbacks

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Guard>=0:devel/p5-Guard

NO_ARCH=	yes

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
