# Created by: Ruben van Staveren
# $FreeBSD: head/devel/p5-Thread-Cancel/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	Thread-Cancel
PORTVERSION=	1.13
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Cancel (i.e., kill) threads

RUN_DEPENDS=	p5-threads>=1.34:devel/p5-threads
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

pre-everything::
	@${ECHO_MSG} "--------------------------------------------------------"
	@${ECHO_MSG} "This module requires a threaded perl.  If your install"
	@${ECHO_MSG} "is not threaded please install lang/${PERL_PORT} with threads"
	@${ECHO_MSG} "--------------------------------------------------------"

.include <bsd.port.mk>
