# Created by: Peter Vereshagin <peter@vereshagin.org>
# $FreeBSD: head/devel/p5-Sub-Alias/Makefile 464021 2018-03-09 21:49:21Z sunpoet $

PORTNAME=	Sub-Alias
PORTVERSION=	0.03
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Simple subroutine alias

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Devel-BeginLift>=0:devel/p5-Devel-BeginLift \
		p5-Devel-Declare>=0:devel/p5-Devel-Declare \
		p5-Sub-Exporter>=0:devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
