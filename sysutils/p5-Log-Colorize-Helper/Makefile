# $FreeBSD$

PORTNAME=	Log-Colorize-Helper
PORTVERSION=	0.1.1
PORTREVISION=	1
CATEGORIES=	sysutils perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vvelox@vvelox.net
COMMENT=	Makes searching and colorizing logs trivial without piping

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Error-Helper>=1.0.0:devel/p5-Error-Helper \
		p5-String-ShellQuote>=1.04:textproc/p5-String-ShellQuote
TEST_DEPENDS=	p5-Test-Pod>=1.22:devel/p5-Test-Pod \
		p5-Test-Pod-Coverage>=1.08:devel/p5-Test-Pod-Coverage
RUN_DEPENDS=	colorize>=0.3.4:sysutils/colorize

USES=		perl5

NO_ARCH=	yes
USE_PERL5=	configure

.include <bsd.port.mk>
