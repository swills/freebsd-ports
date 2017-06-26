# Created by: Shell Hung <shell@shellhung.org>
# $FreeBSD: head/devel/p5-Test-Simple/Makefile 444139 2017-06-22 23:40:50Z sunpoet $

PORTNAME=	Test-Simple
PORTVERSION=	1.302086
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Basic utilities for writing tests in perl

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual
LICENSE_FILE=	${WRKSRC}/LICENSE

CONFLICTS_INSTALL=	p5-Test2-[0-9]* p5-Test-Tester-[0-9]* p5-Test-use-ok-[0-9]*

NO_ARCH=	yes
USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
