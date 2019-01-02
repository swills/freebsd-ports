# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: head/misc/p5-Array-Compare/Makefile 488359 2018-12-26 07:26:03Z wen $

PORTNAME=	Array-Compare
PORTVERSION=	3.0.2
DISTVERSIONPREFIX=	v
CATEGORIES=	misc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension for comparing arrays

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Moo>0:devel/p5-Moo \
		p5-Type-Tiny>0:devel/p5-Type-Tiny
TEST_DEPENDS=	p5-Test-NoWarnings>0:devel/p5-Test-NoWarnings

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

PLIST_FILES=	${SITE_PERL}/Array/Compare.pm \
		${SITE_MAN3}/Array::Compare.3.gz

.include <bsd.port.mk>
