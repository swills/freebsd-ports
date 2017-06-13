# Created by: Kurt Lidl <kurt.lidl@cello.com>
# $FreeBSD: head/devel/p5-Number-Tolerant/Makefile 442351 2017-06-01 23:51:52Z sunpoet $

PORTNAME=	Number-Tolerant
PORTVERSION=	1.708
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Provides inexact number comparisons with tolerance ranges

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Sub-Exporter>=0.950:devel/p5-Sub-Exporter
RUN_DEPENDS:=	${BUILD_DEPENDS}

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
