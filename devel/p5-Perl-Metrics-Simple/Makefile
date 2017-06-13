# $FreeBSD: head/devel/p5-Perl-Metrics-Simple/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Perl-Metrics-Simple
PORTVERSION=	0.18
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	kuriyama@FreeBSD.org
COMMENT=	Perl extension to count packages, subs, lines, etc. of many files

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	\
	p5-PPI>=1.113:textproc/p5-PPI \
	p5-Readonly>=1.03:devel/p5-Readonly \
	p5-Statistics-Basic>0:math/p5-Statistics-Basic
BUILD_DEPENDS:=	${RUN_DEPENDS}
TEST_DEPENDS=	\
	p5-Test-Pod>0:devel/p5-Test-Pod \
	p5-Test-Pod-Coverage>0:devel/p5-Test-Pod-Coverage

USES=		perl5
USE_PERL5=	configure
NO_ARCH=	YES

post-patch:
	${FIND} ${WRKSRC} -name '*.orig' -delete

.include <bsd.port.mk>
