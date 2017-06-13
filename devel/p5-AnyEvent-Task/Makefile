# $FreeBSD: head/devel/p5-AnyEvent-Task/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	AnyEvent-Task
PORTVERSION=	0.801
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	bill.brinzer@gmail.com
COMMENT=	Client/server-based asynchronous worker pool

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-AnyEvent>=0:devel/p5-AnyEvent \
		p5-Callback-Frame>=0:devel/p5-Callback-Frame \
		p5-Guard>=0:devel/p5-Guard \
		p5-JSON-XS>=0:converters/p5-JSON-XS \
		p5-Log-Defer>=0.300:devel/p5-Log-Defer \
		p5-common-sense>=0:devel/p5-common-sense
BUILD_DEPENDS:=	${RUN_DEPENDS}

NO_ARCH=	yes

USES=	perl5
USE_PERL5=	configure

.include <bsd.port.mk>
