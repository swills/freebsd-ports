# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: head/devel/p5-MooseX-Log-Log4perl/Makefile 451819 2017-10-12 08:10:17Z sunpoet $

PORTNAME=	MooseX-Log-Log4perl
PORTVERSION=	0.47
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Logging role for Moose based on Log::Log4perl

BUILD_DEPENDS=	p5-Any-Moose>=0.12:devel/p5-Any-Moose \
		p5-Log-Log4perl>=1.13:devel/p5-Log-Log4perl
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-IO-stringy>=0:devel/p5-IO-stringy \
		p5-Moose>=0.65:devel/p5-Moose

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

post-patch:
	@${REINPLACE_CMD} -i '' -e '/auto_install;/d' \
		${WRKSRC}/Makefile.PL

.include <bsd.port.mk>
