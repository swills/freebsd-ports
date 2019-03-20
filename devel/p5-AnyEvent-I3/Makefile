# Created by: Aldis Berjoza <aldis@bsdroot.lv>
# $FreeBSD: head/devel/p5-AnyEvent-I3/Makefile 495334 2019-03-11 09:00:58Z amdmi3 $

PORTNAME=	AnyEvent-I3
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	Communicate with the i3 window manager

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-JSON-XS>=0:converters/p5-JSON-XS
RUN_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-JSON-XS>=0:converters/p5-JSON-XS

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	yes

.include <bsd.port.mk>
