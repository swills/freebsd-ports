# $FreeBSD: head/devel/p5-Test-Roo/Makefile 452126 2017-10-15 02:47:49Z pi $

PORTNAME=	Test-Roo
PORTVERSION=	1.004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Composable, reusable tests with roles and Moo

LICENSE=	APACHE20

BUILD_DEPENDS=	p5-Moo>=0:devel/p5-Moo
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
