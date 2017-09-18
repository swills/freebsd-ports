# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: head/devel/p5-BS-Event/Makefile 449893 2017-09-15 08:58:46Z mat $

PORTNAME=	BS-Event
PORTVERSION=	0.3
PORTREVISION=	2
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ELMEX
PKGNAMEPREFIX=	p5-

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Class that provides an event callback interface

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

OPTIONS_DEFINE=	EXAMPLES

NO_ARCH=	yes
USE_PERL5=	configure
USES=		perl5 shebangfix
SHEBANG_FILES=	samples/simple_example
perl_OLD_CMD=	/opt/perl/bin/perl

PORTEXAMPLES=	simple_example

post-install:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/
	${INSTALL_SCRIPT} ${WRKSRC}/samples/simple_example ${STAGEDIR}${EXAMPLESDIR}/

.include <bsd.port.mk>
