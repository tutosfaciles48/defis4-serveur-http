//
// Created by Romain Neil on 28/03/2021.
//

#ifndef HTTP_COUNTER_RESPONSE_H
#define HTTP_COUNTER_RESPONSE_H

#include <string>
#include <vector>
#include <sstream>
#include <vector>

#include "utils.h"

/**
 * Représente la réponse pour un client
 */
class Response {

	public:

		explicit Response(SOCKET socket);
		~Response() = default;

		void write(const std::string& data);

		void setContentType(const std::string &contentType);

		void setHeader(const std::string& headerName, const std::string& headerValue);

		void setHttpStatusCode(int code);

	private:

		SOCKET m_socket;

		std::stringstream m_response;

};


#endif //HTTP_COUNTER_RESPONSE_H
