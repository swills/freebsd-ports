# Created by: Erwin Lansing <erwin@FreeBSD.org>
# $FreeBSD: head/devel/p5-Curses-UI/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	Curses-UI
PORTVERSION=	0.9609
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Curses based OO user interface framework

LICENSE=	ART10 GPLv1+
LICENSE_COMB=	dual

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-Curses>=0:devel/p5-Curses \
		p5-Term-ReadKey>=0:devel/p5-Term-ReadKey

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
