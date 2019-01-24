# Created by: Thierry Thomas (<thierry@pompo.net>)
# $FreeBSD: head/devel/pear-HTML_Select_Common/Makefile 489876 2019-01-10 17:13:00Z joneum $

PORTNAME=	HTML_Select_Common
PORTVERSION=	1.2.0
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Some small PEAR classes to handle common <select> lists

LICENSE=	BSD2CLAUSE

BUILD_DEPENDS=	${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}	\
		${PEARDIR}/I18N/Common.php:devel/pear-I18N@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTML/Common.php:devel/pear-HTML_Common@${PHP_FLAVOR}	\
		${PEARDIR}/I18N/Common.php:devel/pear-I18N@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
