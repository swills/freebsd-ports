# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/devel/p5-Carp-Assert-More/Makefile 447416 2017-08-05 23:10:47Z sunpoet $

PORTNAME=	Carp-Assert-More
PORTVERSION=	1.16
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Convenience wrappers around Carp::Assert

LICENSE=	ART20

BUILD_DEPENDS=	p5-Carp-Assert>=0:devel/p5-Carp-Assert
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:devel/p5-Test-Exception

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
