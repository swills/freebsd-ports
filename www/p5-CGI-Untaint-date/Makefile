# Created by: Aaron Dalton <aaron@FreeBSD.org>
# $FreeBSD: head/www/p5-CGI-Untaint-date/Makefile 481365 2018-10-06 13:06:42Z des $

PORTNAME=	CGI-Untaint-date
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Validate a date

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	p5-CGI-Untaint>=0:www/p5-CGI-Untaint \
		p5-Date-Manip>=0:devel/p5-Date-Manip \
		p5-Date-Simple>=0:devel/p5-Date-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
