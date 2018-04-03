# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-IO-Async/Makefile 466330 2018-04-03 09:52:28Z sunpoet $

PORTNAME=	IO-Async
PORTVERSION=	0.72
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:PEVANS
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl modules that implement asynchronous filehandle IO

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	p5-Future>=0.33:devel/p5-Future \
		p5-Struct-Dumb>0:devel/p5-Struct-Dumb
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Fatal>=0:devel/p5-Test-Fatal \
		p5-Test-Identity>=0:devel/p5-Test-Identity \
		p5-Test-Pod>=1:devel/p5-Test-Pod \
		p5-Test-Refcount>=0:devel/p5-Test-Refcount

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	modbuild

.include <bsd.port.mk>
