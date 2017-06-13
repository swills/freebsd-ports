# Created by: Aldis Berjoza <aldis@bsdroot.lv>
# $FreeBSD: head/devel/p5-AnyEvent-I3/Makefile 438313 2017-04-11 20:21:53Z bapt $

PORTNAME=	AnyEvent-I3
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Communicate with the i3 window manager

BUILD_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-JSON-XS>=0:converters/p5-JSON-XS
RUN_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-JSON-XS>=0:converters/p5-JSON-XS

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
